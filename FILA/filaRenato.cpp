#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    unsigned short e, v[50001],s,vs[50001];
    bool a[100001];

    for (int i = 0; i < 100001; i++) {
      a[i] = false;
    }

    cin>>e;
        for(int i=0;i<e;i++)
        {
            cin>>v[i];
        }
        cin>>s;

        for (int i=0;i<s;i++)
        {
            cin>>vs[i];
              a[vs[i]]=true;
        }
         for(int i=0;i<e;i++)
        {
               if(a[v[i]]==false)
               {
                   cout<<v[i]<<" ";
               }
        }
    return 0;
}
