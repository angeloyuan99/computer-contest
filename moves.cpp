std::vector<move> game::generate_possible_moves(const piece* m_piece, const board& c_board)const
{
	std::vector<move> possible_moves;
	const sf::Vector2i piece_position = m_piece->get_piece_position();
	switch(m_piece->get_type())
	{
	case p_type::KING:
		for(int i = 0; i < 8; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + p_moves::king_moves[i][0];
			temp.y = piece_position.y + p_moves::king_moves[i][1];
			if (temp.x <= 8 &&
				temp.y <= 8 &&
				temp.x >= 1 &&
				temp.y >= 1 &&
				c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({{piece_position},{temp}});
			}
		}		
		break;
	case p_type::PAWN:
		if(m_piece->get_move_state() == false &&
			c_board.find_piece_at_position({piece_position.x,
				(m_piece->get_colour() ? piece_position.y + 2 : piece_position.y - 2) }) == nullptr)
			//this checks whether the pawn can move two spaces
		{
			possible_moves.push_back({ piece_position,{piece_position.x,
				(m_piece->get_colour() ? piece_position.y + 2 : piece_position.y - 2)} });
		}
		if(c_board.find_piece_at_position({ piece_position.x,
				(m_piece->get_colour() ? piece_position.y + 1 : piece_position.y - 1) }) == nullptr && 
			piece_position.x <= 8 &&
			piece_position.y <= 8 &&
			piece_position.x >= 1 &&
			piece_position.y >= 1)
			//this checks whether the pawn can move forward
		{
			possible_moves.push_back({ piece_position,{piece_position.x,
				(m_piece->get_colour() ? piece_position.y + 1 : piece_position.y - 1)} });
		}
		if(c_board.find_piece_at_position({ (piece_position.x + 1) ,
				(m_piece->get_colour() ? piece_position.y + 1 : piece_position.y - 1) }) != nullptr &&
			c_board.find_piece_at_position({ (piece_position.x + 1) ,
				(m_piece->get_colour() ? piece_position.y + 1 : piece_position.y - 1) })->get_colour() != m_piece->get_colour() )
		{
			possible_moves.push_back({ piece_position, {(piece_position.x + 1),(m_piece->get_colour() ? piece_position.y + 1 : piece_position.y - 1)} });
		}
		if (c_board.find_piece_at_position({ (piece_position.x - 1) ,
				(m_piece->get_colour() ? piece_position.y + 1 : piece_position.y - 1) }) != nullptr &&
			c_board.find_piece_at_position({ (piece_position.x - 1) ,
				(m_piece->get_colour() ? piece_position.y + 1 : piece_position.y - 1) })->get_colour() != m_piece->get_colour())
		{
			possible_moves.push_back({ piece_position, {(piece_position.x - 1),(m_piece->get_colour() ? piece_position.y + 1 : piece_position.y - 1)} });
		}
		break;
	case p_type::ROOK:
		for(int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + 0;
			temp.y = piece_position.y + (i+1);
			if(c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour() 
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (i + 1);
			temp.y = piece_position.y + 0;
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (-i -1);
			temp.y = piece_position.y + 0;
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + 0;
			temp.y = piece_position.y + (-i - 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		break;
	case p_type::BISHOP:
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (i + 1);
			temp.y = piece_position.y + (i + 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (i + 1);
			temp.y = piece_position.y + (-i -1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (-i - 1);
			temp.y = piece_position.y + (i+1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (-i - 1);
			temp.y = piece_position.y + (-i - 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		break;
	case p_type::QUEEN:
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (i + 1);
			temp.y = piece_position.y + (i + 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if(c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (i + 1);
			temp.y = piece_position.y + (-i - 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if(c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (-i - 1);
			temp.y = piece_position.y + (i + 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (-i - 1);
			temp.y = piece_position.y + (-i - 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + 0;
			temp.y = piece_position.y + (i + 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (i + 1);
			temp.y = piece_position.y + 0;
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + (-i - 1);
			temp.y = piece_position.y + 0;
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		for (int i = 0; i < 7; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + 0;
			temp.y = piece_position.y + (-i - 1);
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() == m_piece->get_colour()
				)
			{
				break;
			}
			if (c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()
				)
			{
				possible_moves.push_back({ piece_position, temp });
				break;
			}
			else if (c_board.find_piece_at_position(temp) == nullptr ||
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour() &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
		break;
	case p_type::KNIGHT:
		for (int i = 0; i < 8; ++i)
		{
			sf::Vector2i temp;
			temp.x = piece_position.x + p_moves::knight_moves[i][0];
			temp.y = piece_position.y + p_moves::knight_moves[i][1];
			if (c_board.find_piece_at_position(temp) == nullptr &&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y ||
				c_board.find_piece_at_position(temp) != nullptr &&
				c_board.find_piece_at_position(temp)->get_colour() != m_piece->get_colour()&&
				temp.x >= p_moves::min_bounds.x &&
				temp.y >= p_moves::min_bounds.y &&
				temp.x <= p_moves::max_bounds.x &&
				temp.y <= p_moves::max_bounds.y
				)
			{
				possible_moves.push_back({ piece_position, temp });
			}
		}
	}
	return possible_moves;
}