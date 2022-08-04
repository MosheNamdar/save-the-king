#pragma once
#include "StaticObject.h"

class Ork : public StaticObject {
public:
	Ork(const sf::Vector2f& position, const sf::Vector2f& size);

	virtual void handleCollision(GameObject& gameObject) override;
	virtual void handleCollision(King& king) override;
	virtual void handleCollision(Mage& mage) override;
	virtual void handleCollision(Thief& thief) override;
	virtual void handleCollision(Warrior& warrior) override;
	virtual void handleCollision(Dwarf& dwarf) override;

private:

};