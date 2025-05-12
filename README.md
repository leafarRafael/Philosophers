README - Philosophers (Português)

Philosophers

Implementação do problema dos filósofos comensais em C, utilizando semáforos para gerenciar a concorrência entre processos.

📚 Sobre o Projeto

Este projeto aborda o clássico problema da computação concorrente conhecido como "Problema dos Filósofos Comensais". Nele, filósofos alternam entre pensar, comer e dormir, compartilhando recursos limitados (garfos) de maneira sincronizada para evitar condições de corrida e deadlocks.

🛠️ Estrutura do Projeto

includes/: Contém os arquivos de cabeçalho (.h) com as definições de estruturas e funções utilizadas no projeto.

src/: Contém os arquivos fonte (.c) com a implementação das funcionalidades principais.

Makefile: Arquivo para automação da compilação do projeto.

Untitled 1.odt: Possivelmente contém documentação adicional ou anotações relacionadas ao projeto.

🚀 Compilação e Execução

Para compilar o projeto, utilize o comando:

make

Após a compilação, execute o programa com os parâmetros desejados:

./philosophers [número_de_filósofos] [tempo_para_morrer] [tempo_para_comer] [tempo_para_dormir] [número_de_refeições_opcional]

Exemplo:

./philosophers 5 800 200 200

Este comando inicia a simulação com 5 filósofos, onde cada um tem 800ms para morrer sem comer, 200ms para comer e 200ms para dormir.

🧪 Testes e Visualização

Para visualizar a simulação de forma gráfica, você pode utilizar ferramentas como:

Philosophers Visualizer

Philosophers Visualizer v2

Essas ferramentas permitem acompanhar em tempo real as ações dos filósofos (comendo, pensando, dormindo) de maneira interativa.

📄 Licença

Este projeto está sob a licença MIT. Consulte o arquivo LICENSE para mais informações.

👤 Autor

Rafael

README - Philosophers (English)

Philosophers

Implementation of the dining philosophers problem in C, using semaphores to manage concurrency between processes.

📚 About the Project

This project addresses the classic concurrency problem known as the "Dining Philosophers Problem." Philosophers alternate between thinking, eating, and sleeping, sharing limited resources (forks) in a synchronized way to avoid race conditions and deadlocks.

🛠️ Project Structure

includes/: Contains header files (.h) with structure and function definitions.

src/: Contains source files (.c) with the implementation of core functionalities.

Makefile: File used to automate the build process.

Untitled 1.odt: Possibly contains additional documentation or project notes.

🚀 Compilation and Execution

To compile the project, run:

make

After compilation, run the program with the desired parameters:

./philosophers [number_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep] [number_of_meals_optional]

Example:

./philosophers 5 800 200 200

This starts the simulation with 5 philosophers, each with 800ms to die without eating, 200ms to eat, and 200ms to sleep.

🧪 Testing and Visualization

To visualize the simulation graphically, you can use tools like:

Philosophers Visualizer

Philosophers Visualizer v2

These tools allow you to monitor the philosophers' actions (eating, thinking, sleeping) in real time interactively.

📄 License

This project is licensed under the MIT License. See the LICENSE file for details.

👤 Author

Rafael

