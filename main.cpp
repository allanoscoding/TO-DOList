#include <iostream>
#include <map>
#include <string>
void add_task(std::map<int,std::string> &list){
    std::string task;
    std::cout << "Introduce the task: ";
    std::cin >> task;
    std::cout << "\n";
    list.insert(std::pair<int,std::string>(list.size() + 1, task));
}
void remove_task(std::map<int,std::string> &list){

}
void write_into_file(std::map<int,std::string> &list){

}
void show_list(std::map<int,std::string> &list){
    for(auto it=list.begin();it != list.end();++it){
        std::cout << it->first << "." << it->second << std::endl;
    }
}
void menu(std::map<int,std::string> &list){
    int ans;
    std::cout << "1.Add task" << std::endl;
    std::cout << "2.Remove task" << std::endl;
    std::cout << "3.Save list" << std::endl;
    std::cout << "4.Show list" << std::endl;
    std::cout << "5.Exit" << std::endl;
    std::cin >> ans;

    switch (ans)
    {
    case 1:
        add_task(list);
        break;
    case 2:
        remove_task(list);
        break;
    case 3:
        write_into_file(list);
        break;
    case 4:
        show_list(list);
    case 5:
        exit(1);
    default:
        break;
    }
}
int main(){
    std::map<int,std::string> to_do_list;    
    std::cout << "Welcome to your TODO list" << std::endl;
    if(to_do_list.size() == 0)
        std::cout << "List empty, lucky you!" << std::endl;
    
    std::cout << "What do you want to do?" << std::endl;
    while (1){
        menu(to_do_list);
    }
    return 0;
}