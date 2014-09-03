#ifndef Tokenizer
#define Tokenizer

/*
Tokenizer.hpp
Simple function that divides a string into tokens based on a delimeter
Coyright Daniël Louw <daniel@dline.co.za> 2014
*/
unsigned TokenizeString(const string& i_source, const string& i_seperators, bool i_discard_empty_tokens, vector<string>& o_tokens)
{
	unsigned prev_pos = 0;
	int pos = 0;
	unsigned number_of_tokens = 0;
	o_tokens.clear();
	pos = i_source.find_first_of(i_seperators, pos);

	while (pos != string::npos)
	{
		string token = i_source.substr(prev_pos, pos - prev_pos);
		if (!i_discard_empty_tokens || token != "")
		{
			o_tokens.push_back(i_source.substr(prev_pos, pos - prev_pos));
			number_of_tokens++;
		}
		pos++;
		prev_pos = pos;
		pos = i_source.find_first_of(i_seperators, pos);
	}
	if (prev_pos < i_source.length())
	{
		o_tokens.push_back(i_source.substr(prev_pos));
		number_of_tokens++;
	}
	return number_of_tokens;
}

#endif
