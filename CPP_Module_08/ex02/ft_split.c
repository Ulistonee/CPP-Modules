# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void ft_free_all_memmory(size_t number_of_words, char **result)
{
	while (number_of_words--)
		free(result[number_of_words - 1]);
	free(result);
}

char *ft_pull_the_word(const char *s, char c)
{
	char *word;
	int  i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int ft_counting_words(const char *s, char c)
{
	int num;

	num = 0;
	while (*s)
	{
		if (*s && *s == c)
			s++;
		else
		{
			num++;
			while (*s && *s != c)
				s++;
		}
	}
	return (num);
}

char **ft_split(const char *s, char c)
{
	int  number_of_words;
	char **result;
	int  i;

	i = 0;
	number_of_words = ft_counting_words(s, c);
	if (ft_strlen(s) == 0 && number_of_words == 0)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (number_of_words + 1));
	if (!result)
		return (NULL);
	while (number_of_words--)
	{
		while (*s && *s == c)
			s++;
		result[i] = ft_pull_the_word(s, c);
		if (result[i] == NULL)
			ft_free_all_memmory(number_of_words, result);
		while (*s && *s != c)
			s++;
		i++;
	}
	result[i] = NULL;
	return (result);
}

int main(void)
{
	int i = 0;
	char **res = ft_split("  alpha  beta   gamma delta      ", ' ');
	while (res[i])
		printf("%s\n", res[i++]);
	return (0);
}