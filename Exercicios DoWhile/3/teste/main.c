int main() {
    int x = 1, totPessoas = 0, totIdades = 0, idadeMedia = 0, idadeMenor = 0, idadeMaior = 0;

    do {
        int idade = 0;
        printf("Digite sua idade:    ");
        scanf("%i", &idade);

        if (idade == 0) {
            break;
        }

        totPessoas++;
        totIdades += idade;
        idadeMedia = totIdades / totPessoas;

        if (idade > idadeMaior) {
            idadeMaior = idade;
        }

        if (idade < idadeMenor || idadeMenor == 0) {
            idadeMenor = idade;
        }
    } while (x != 0);

    printf("A media das idades foi de: %i\n", idadeMedia);
    printf("A numero de pessoas foi de: %i\n", totPessoas);
    printf("A maior idade foi de: %i\n", idadeMaior);
    printf("A menor idade foi de: %i\n", idadeMenor);
}
