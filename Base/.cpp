//Access elements from spiral
void Spiral(){
    int row, col, ans;
    cin >> row >> col;
    if(row > col){
        if(row % 2 == 0)
            ans = (row * row) - col +1;
        else 
            ans = (row - 1)*(row - 1) + col;
    }
    else {
        if(col % 2 == 0)
            ans = (col - 1)*(col - 1) + row;
        else
            ans = (col * col) - row + 1;
    }
    cout << ans;
}
