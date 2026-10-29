#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(JumpAssistPlayer, PlayerObject) {
    void pushButton(PlayerButton p0) {
        // Llamamos primero al comportamiento original del salto
        PlayerObject::pushButton(p0);

        // AQUÍ IMPLEMENTAMOS LA LÓGICA DE ASISTENCIA:
        // Detectamos la posición actual del jugador y evaluamos la distancia al peligro.
        // Si la distancia es menor o igual a medio bloque y el salto actual terminaría en colisión letal,
        // forzamos la prolongación del input usando las hitboxes del juego.

        CCPoint pos = this->getPosition();

        // Ejemplo de depuración visual/notificación en pantalla para verificar que el hook funciona:
        // log::info("Posición del jugador X: {}, Y: {}", pos.x, pos.y);
    }
};
