int main(int argc, char **argv){
    int age = argc, allowed;
    
    if (age < 12) {
        allowed = 0;
    } 
    if (age >= 13) {
        allowed = 1;
    }
    return allowed;
}
