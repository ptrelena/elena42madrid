
#include "get_next_line.h"

#include <stdlib.h>  // malloc, free
#include <unistd.h>  // read

// Helper function to find newline character in the buffer
int find_newline(char *s) {
    int i;
    
    i = 0;
    if (!s)
        return -1;  // If buffer is NULL, return -1 (no newline)
    while (s[i]) // Loop through the buffer
    {
        if (s[i] == '\n')
            return i;  // Return index of first newline found
        i++;
    }
    return (-1);  // No newline found
}

// Helper function to get the length of a string
int ft_strlen(char *s)
{
    int len;
    
    len = 0;
    while (s && s[len])  // Count characters until '\0'
        len++;
    return len;
}

// Helper function to join two strings dynamically
char *ft_strjoin(char *s1, char *s2) 
{
    int len1;
    int len2;
    char *result;
    int i;
    int j;
    
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    result = malloc(len1 + len2 + 1);  // Allocate memory for concatenated string
    i = 0;
    j = 0;
    if (!result)
    return NULL;  // Return NULL if malloc fails
    while (i < len1) {  // Copy s1 into result
        result[i] = s1[i];
        i++;
    }
    while (j < len2) {  // Copy s2 into result
        result[i] = s2[j];
        i++;
        j++;
    }

    result[i] = '\0';  // Null-terminate the string

    free(s1);  // Free previous buffer to prevent memory leaks
    return result;
}

// Extracts a line from the buffer (up to and including '\n')
char *extract_line(char *buffer) {
    int i = 0;
    while (buffer[i] && buffer[i] != '\n')  // Find the newline position
        i++;

    char *line = malloc(i + 2);  // Allocate memory (including space for '\n' and '\0')
    if (!line) return NULL;  // Return NULL if allocation fails

    int j = 0;
    while (j <= i) {  // Copy the line including the '\n'
        line[j] = buffer[j];
        j++;
    }

    line[j] = '\0';  // Null-terminate the string
    return line;
}

// Removes the extracted line from the buffer, keeping the remaining content
char *trim_buffer(char *buffer) {
    int i = 0;
    int j = 0;

    while (buffer[i] && buffer[i] != '\n')  // Find the newline position
        i++;

    if (!buffer[i]) {  // If no newline found, free buffer and return NULL
        free(buffer);
        return NULL;
    }

    i++;  // Move past the newline character
    int new_len = ft_strlen(buffer) - i;
    char *new_buffer = malloc(new_len + 1);  // Allocate new buffer for remaining content
    if (!new_buffer) return NULL;  // Return NULL if allocation fails

    while (buffer[i]) {  // Copy remaining content to new buffer
        new_buffer[j] = buffer[i];
        i++;
        j++;
    }

    new_buffer[j] = '\0';  // Null-terminate the new buffer

    free(buffer);  // Free old buffer
    return new_buffer;
}

// Main function to get the next line from the file descriptor
char *ft_get_next_line(int fd) {
    static char *buffer;  // Static variable to retain leftover data between calls
    char temp[BUFFER_SIZE + 1];  // Temporary buffer to read new data
    int bytes_read;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;  // Invalid file descriptor or buffer size

    // Read until we find a newline or reach EOF
    while (find_newline(buffer) == -1) {
        bytes_read = read(fd, temp, BUFFER_SIZE);  // Read up to BUFFER_SIZE bytes from file
        if (bytes_read <= 0) break;  // Stop if read fails or reaches EOF

        temp[bytes_read] = '\0';  // Null-terminate the string
        buffer = ft_strjoin(buffer, temp);  // Append newly read data to buffer
    }

    if (!buffer || !*buffer) return (free(buffer), buffer = NULL, NULL);  // If buffer is empty, return NULL

    char *line = extract_line(buffer);  // Extract the next line
    buffer = trim_buffer(buffer);  // Remove the extracted line from the buffer

    return line;  // Return the extracted line
}
