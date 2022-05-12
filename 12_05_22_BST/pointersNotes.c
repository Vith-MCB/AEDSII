/*
 * Níveis de altura da árvore
 *
 *          [5]      lvl i = 0
 *      [4]     [6]  lvl i = 1
 *                   ...
 *
 * The node high is defined as the size of the longest path (leaf to node)
 * If the tree has only one node, the tree high is 0
 * A Empty tree has -1 high
 *
 */

/* Tree high function
 *
    int high(pointer p){
        if(p == NULL) {
            return -1; // empty tree high
        }
        else {
            int leftH = high(p->left);
            int rightH = high(p->right);
            if(leftH < rightH){
                return rightH + 1;
            }
            else{
                return leftH + 1;
            }
        }
    }
*/


/*
 * 
 */