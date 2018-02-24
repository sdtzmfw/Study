class Rotation {
public:
	bool chkRotation(string A, int lena, string B, int lenb) {
		// write code here
		if(lena != lenb)
		{
			return false; 
		}

		string strAA = A + A;
		string::size_type pos = strAA.find(B);
		if(pos != string::npos)
		{
			return true; 
		}
		else
			return false;    
	}
};