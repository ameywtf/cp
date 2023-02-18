#include <bits/stdc++.h>

#include <processthreadsapi.h>

double get_cpu_time(){
    FILETIME a,b,c,d;
    if (GetProcessTimes(GetCurrentProcess(),&a,&b,&c,&d) != 0){
        //  Returns total user time.
        //  Can be tweaked to include kernel times as well.
        return
            (double)(d.dwLowDateTime |
            ((unsigned long long)d.dwHighDateTime << 32)) * 0.0000001;
    }else{
        //  Handle error
        return 0;
    }
}

using namespace std;


bool visited[7][7];
int ans = 0;

int dx[] = {0 , 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int prevX;
int prevY;

bool isValid(int x, int y) {
    return (x >= 0 && x < 7 && y >= 0 && y < 7 && !visited[x][y]);
}

void dfs(int x, int y, int depth) {
    visited[x][y] = true;
    if(x != 0 && x != 6 && y == 0 && !visited[x-1][y] && !visited[x+1][y]) {
        visited[x][y] = false;
        return;
    }
    if(x == 0 && y!= 0 && y != 6 && !visited[x][y-1] && !visited[x][y+1]) {
        visited[x][y] = false;
        return;
    }
    if(x != 0 && x != 6 && y == 6 && !visited[x-1][y] && !visited[x+1][y]) {
        visited[x][y] = false;
        return;
    } 
    if(x == 6 && y != 0 && y != 6 && !visited[x][y-1] && !visited[x][y+1]) {
        visited[x][y] = false;
        return;
    }

//    if(x != 0 && x != 6 && y != 0 && y != 6 && 
//      (visited[x+1][y] || visited[x-1][y] || visited[x][y+1] || visited[x][y-1]) && 
//      ((x+1 != prevX) && (x-1 != prevX) && (y-1 != prevY) && (y+1!=prevY))) {
//        visited[x][y] = false;
//        return;
//    }

    if(x == 6 && y == 6) {
        if(depth == 48)  {
            ans++;
            cout << ans << '\n';
        }
        visited[x][y] = false;
        return;
    } 
    for(int i = 0; i < 4; i++) {
        if(depth == 0) {
            dfs(x, y+1, depth+1);
            break;
        }
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(isValid(nx,ny)) {
            dfs(nx, ny, depth+1);
        }
    }
    visited[x][y] = false;
    prevX = x;
    prevY = y;
}

int main() {
    double begin = get_cpu_time();

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    dfs(0,0,0);

    cout << ans * 2 << '\n';


    double end = get_cpu_time();
    double elapsed = (end - begin);
    cout << elapsed << '\n';

    return 0;
}
