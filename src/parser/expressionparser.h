#ifndef EXPRESSIONPARSER_H
#define EXPRESSIONPARSER_H
#include <QString>
#include <QDebug>

class ExpressionParser
{
public:
    ExpressionParser(QString& expr);
    void ParseChars();
    void DeriveExpression();
private:
    QString m_expr;
    QString m_result;
protected:
    int m_exp;
    QChar m_var;
    QString m_delvar;
};

#endif // EXPRESSIONPARSER_H
