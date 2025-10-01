#include <iostream>
#include <string>
#include <vector>
#include <random>   
#include <chrono>    
using namespace std;

int main(void){
    //essa parte gera os numeros aleatorios
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::mt19937 generator(seed); 
    
  
    std::uniform_int_distribution<int> distribution(0, 2);

    int player;
    string player_choose;
    vector<string> options = {"pedra", "papel", "tesoura"};
    
   
    string computer_choise = options[distribution(generator)];

    cout << "Ola jogador, voce esta no jogo de pedra papel e tesoura\n";
    cout << "E agora voce jogara contra a maquina" << endl;
    cout << "\n Escreva a opção que voce quer (pedra, papel e tesoura)";
    cin >> player_choose ;

    for(int i = 0; i < 3; i++){
         if(options[i] == player_choose){
             player = i;
         }
    }
    cout << "\nA máquina escolheu: " << computer_choise << endl; 

    if(computer_choise == options[(player + 1) % 3]){
         cout << "\n\nvoce perde :(" << endl ;
    }
    else if(computer_choise == options[player]){
         cout << "\n\nempate" << endl ;
    }
    else{
         cout << "\n\nvoce ganhou!!";
    }

    return 0;
}
