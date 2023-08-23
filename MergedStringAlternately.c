char *mergeAlternately(char *word1, char *word2) {
    int i = 0, j = 0, k = 0;
    char *merged;

    int totalLength = strlen(word1) + strlen(word2) + 1;
    merged = (char *)malloc(totalLength * sizeof(char));

    while (word1[i] != '\0' && word2[j] != '\0') {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }

    while (word1[i] != '\0') {
        merged[k++] = word1[i++];
    }

    while (word2[j] != '\0') {
        merged[k++] = word2[j++];
    }

    merged[k] = '\0';

    return merged;
}
