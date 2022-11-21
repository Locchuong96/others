### Override

A kind of setup you can do to avoid error in your inheritance hierachy, the compiler will know the

Override

	class Oval : public Shape
	{
	public:
		Oval() = default;
		Oval(double x_radius,double y_radius, const std::string& description);
		~Oval();
		virtual void draw() const override{
			std::cout << "Oval::draw() called, Drawing: " << m_description <<
			"with m_x_radius: " << m_x_radius << "and m_y_radius: " << m_y_radius << std::endl;
		}
	private:
		double m_x_radius{0.0};
		double m_y_radius{0.0};
	}