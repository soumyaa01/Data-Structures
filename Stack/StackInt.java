public class StackInt{
	int[] arr;
	public int top;
	StackInt(int sz){
		arr = new int[sz];
		top = -1;
	}
	public void print(){
		for(int i=0;i<=top;i++){
			System.out.print(arr[i]+"	");
		}
	}
	public void push(int item){
		top++;
		if(top!=arr.length){
			arr[top]=item;
		}
		else{
			System.out.println("Cannot push. Array full");
		}
	}
	public int getTop(){
		if(top!=-1){
			return arr[top];
		}
		else{
			System.out.println("Stack empty");
			return 0;
		}
	}
	public int pop(){
		int temp = arr[top];
		if(top!=-1){
			top--;
			return temp;
		}
		else{
			System.out.println("Cannot pop");
			return 0;
		}
		
	}
	public int peek(){
		return arr[top];
	}
	public boolean equals(StackInt si){
		for(int i=0;i<arr.length;i++){
			System.out.println(si.arr[i]+" "+arr[i]);
			if(this.arr[i] != si.arr[i]){
				return false;
			}
		}
		return true;
	}
}
