/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:10:19 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/09/02 23:10:19 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Check if an int (converted in ascii) is Alpha-Numeric .
 * @param int the value to check .
 * @return 1 if true, 0 if false .
 * */
int		ft_isalnum(int c);

/**
 * @brief Check if an int (converted in ascii) is Alphabetic .
 * @param int the value to check .
 * @return 1 if true, 0 if false .
 * */
int		ft_isalpha(int c);

/**
 * @brief Check if an int (converted in ascii) is in ascii table .
 * @param int the value to check .
 * @return 1 if true, 0 if false .
 * */
int		ft_isascii(int c);

/**
 * @brief Check if an int (converted in ascii) is Numeric (0 - 9) .
 * @param int the value to check .
 * @return 1 if true, 0 if false .
 * */
int		ft_isdigit(int c);

/**
 * @brief Check if an int (converted in ascii) is a printable character .
 * @param int the value to check .
 * @return 1 if true, 0 if false .
 * */
int		ft_isprint(int c);

/**
 * @brief Get the lengh of a string .
 * @param char* the string to get lengh from .
 * @return The lengh (in size_t) of the string .
 * */
size_t	ft_strlen(const char *str);

/**
 * @brief Copy the src string into the dest string .
 * @param char* the dest string .
 * @param char* the src string .
 * @return The dest string, containing the src string .
 * */
char	*ft_strcpy(char *dest, char *src);

/**
 * @brief Writes n bytes of value c into string s .
 * @param void* the string to write into .
 * @param int the value to write .
 * @param size_t the number of c to write .
 * @return The modified string s (void *) .
 * */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Writes n zero-bytes to string s .
 * @param void* the string to write into .
 * @param size_t the number of zero-bytes to write .
 * */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Copy n number of bytes from memory area src into memory area dest .
 * @param void* the destination to copy into .
 * @param void* the source to copy from .
 * @param size_t the number of bytes to copy from src into dest .
 * @return The modified memory area dest .
 * */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Move n number of bytes from memory area src to memory area dest .
 * Just like memcpy, but it's overlap - protected .
 * @param void* the destination to copy into .
 * @param void* the source to copy from .
 * @param size_t the number of bytes to copy .
 * @return The modified memory area dest .
 * */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Copy no more than dstsize characters from string src to string dest .
 * @param char* the string to copy into .
 * @param char* the string to copy from .
 * @param size_t the predicted size of the modified dest .
 * @return The lengh of src .
 **/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Concatenate at most dstsize - strlen(dest) - 1 characters from src
 * to the end of dest .
 * @param char* the string to cat into .
 * @param char* the string to cat from .
 * @param size_t the size of dest .
 * @return The lenght of dst + the lengh of src .
**/
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/**
 * @brief Set an character (in int) from lower to upper case . 
 * @param int the character to modify .
 * @return The uppercase character .
**/
int		ft_toupper(int c);

/**
 * @brief Set an character (in int) from upper to lower case . 
 * @param int the character to modify .
 * @return The lowercase character .
**/
int		ft_tolower(int c);

/**
 * @brief find the first occurence of a character inside a string . 
 * @param const-char* the string .
 * @param int the character to search in the string .
 * @return A pointer to the first occurence of c inside the string .
**/
char	*ft_strchr(const char *s, int c);

/**
 * @brief find the last occurence of a character inside a string . 
 * @param const-char* the string .
 * @param int the character to search in the string .
 * @return A pointer to the last occurence of c inside the string .
**/
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Compare n characters from str1 and str2  . 
 * @param const-char* the first string to compare .
 * @param const-char* the second string to compare .
 * @param size_t the number of characters to compare .
 * @return An integer greater than, equal to or less than zero, 
 * depending on the comparaison .
**/
int		ft_strncmp(const char *str1, const char *str2, size_t n);

/**
 * @brief find the first occurence of a character inside memory area . 
 * @param const-void* the memory area to search into .
 * @param int the character (as int) to search in the memory area .
 * @return A pointer to the first occurence of c inside the memory area .
**/
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compare n characters from mem area 1 and mem area 2 . 
 * @param const-void* the first mem area to compare .
 * @param const-void* the second mem area to compare .
 * @param size_t the number of characters to compare .
 * @return An integer greater than, equal to or less than zero, 
 * depending on the comparaison .
**/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Search in len characters in str for an occurence of needle .
 * @param const-char* the string to search into .
 * @param const-char* the needle to search in str .
 * @param size_t the number of characters from str to search .
 * @return a pointer to the first occurence of needle, str if needle is empty,
 * null if needle was not found inside str .
 **/
char	*ft_strnstr(const char *str, const char *needle, size_t len);

/**
 * @brief Convert a string into an int .
 * @param char* the string to convert .
 * @return an int converted from str, it stops when a character is found .
 **/
int		ft_atoi(const char *str);

/**
 * @brief Allocate enough space for n number of objects of n size .
 * @param size_t the number of objects .
 * @param size_t the size of those objects .
 * @return the allocated memory area resulting from count * size .
 **/
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief Duplicate a string into a new one .
 * @param const-char* the string to duplicate .
 * @return A new string, a copy of str .
 **/
char	*ft_strdup(const char *str);

/**
 * @brief return a new string from s string, starting at index start
 * and of lengh len .
 * @param char-const* the string to "cut" from .
 * @param unsigned-int the start index from s to start copying from .
 * @param size_t the lengh of the new string .
 * @return a new string from s .
 **/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief create a new string, resulting of the concatenation of s1 and s2 .
 * @param char-const* the first string .
 * @param char-const* the second string .
 * @return a new string, the joining of s1 and s2 .
 **/
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief "Trim" a string, removing the beginning and ending 
 * characters present in the set .
 * @param char-const* the string to trim .
 * @param char-const* the set of characters to trim .
 * @return A new string, the result of the triming of s1 .
 **/
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Cut a string into multiple strings, cutting with a char seperator, 
 * and assign those strings into a **tab .
 * @param char-const* the string to cut .
 * @param char the separator .
 * @return A **tab containing the cut strings .
 **/
char	**ft_split(char const *s, char c);

/**
 * @brief Write a character, writing with a file descriptor parameter .
 * @param char the character to write .
 * @param int the file descriptor .
 **/
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Write a string, writing with a file descriptor parameter .
 * @param char* the string to write .
 * @param int the file descriptor .
 **/
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Write a string, writing with a file descriptor parameter 
 * and ending with a newline .
 * @param char* the string to write .
 * @param int the file descriptor .
 **/
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Write a number, writing with a file descriptor parameter .
 * @param int the number to write .
 * @param int the file descriptor .
 **/
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Apply a function to all characters of string s, returning a new
 * mallocated string resulting of the operations .
 * @param char-const* the string to operate on .
 * @param char-*f the function to use .
 * @return A new string resulting of the operations of f on every 
 * characters of s .
 **/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Convert an int number into a corresponding string .
 * @param int the number to convert .
 * @return A string corresponding on the conversion of int n .
 **/
char	*ft_itoa(int n);

/**
 * @brief Apply a function to all characters of string s, returning a new
 * mallocated string resulting of the operations . The characters
 * are modified using their address .
 * @param char-const* the string to operate on .
 * @param char-*f the function to use .
 * @return A new string resulting of the operations of f on every 
 * characters of s .
 **/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Allocate and create a new link for a chained list .
 * @param void* the content of the new link .
 * @return The new link .
 **/
t_list	*ft_lstnew(void *content);

/**
 * @brief Add the link "new" at the start of the list .
 * @param t_list** the chained list.
 * @param t_list* the link to move at the start of the chained list .
 **/
void	ft_lstadd_front(t_list **alst, t_list *new);

/**
 * @brief Get the number of links inside a chained list .
 * @param t_list* the start of the chained list .
 * @return the number of links inside the list .
 **/
int		ft_lstsize(t_list *lst);

/**
 * @brief Gets the last link of a chained list .
 * @param t_list* the start of the chained list .
 * @return the last link of the chained list .
 **/
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Add the link "new" at the end of the list .
 * @param t_list** the chained list.
 * @param t_list* the link to move at the end of the chained list .
 **/
void	ft_lstadd_back(t_list **alst, t_list *new);

/**
 * @brief Delete the content of a link using a function, then free .
 * @param t_list* the link to delete .
 * @param void*del the delete function .
 **/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Delete all links inside a chained list .
 * @param t_list** the chained list .
 * @param void*del the delete function .
**/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Apply a function to the content of a chained list .
 * @param t_list* the element to modify using f .
 * @param void*f the function to use .
 **/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Apply a function to every element in the chained list,
 * using malloc to create a new list, and using free and del function
 * if needed .
 * @param t_list* the list to iterate on .
 * @param void*f the function to apply .
 * @param void*del the delete function .
 * @return A new list, result of the iterations on the first one .
 **/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif