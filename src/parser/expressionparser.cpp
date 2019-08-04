#include "expressionparser.h"

ExpressionParser::ExpressionParser(QString& expr)
{
    this->m_expr = expr;
    ParseChars();
}

void ExpressionParser::ParseChars()
{
    bool exp_flag = false;
    QString exponent;
    for(int i = 0; i < m_expr.size(); i++)
    {
        if(exp_flag)
        {
            exponent += m_expr[i];
        }
        if(m_expr[i] == "^")
        {
            exp_flag = true;
        }
    }

    this->m_exp = exponent.toInt();
    this->m_var = m_expr[0];
    this->m_delvar = "Δ" + QString(m_var);

    //qDebug() << "t^" + QString::number(m_exp);

    DeriveExpression();
}

void ExpressionParser::DeriveExpression()
{
    if(m_exp == 2)
    {
        m_result = QString(m_var) + "^" + QString::number(m_exp) \
                + "+2" +QString(m_var) + m_delvar + "+" + m_delvar + "^" + QString::number(m_exp) \
                + "-" + QString(m_var) + "^" + QString::number(m_exp) + "/" + \
                m_delvar;
        qDebug() << m_result;
    }
}
