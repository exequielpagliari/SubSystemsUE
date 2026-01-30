# UE5 SubSystems Plugin

Plugin de infraestructura para Unreal Engine 5 que implementa una arquitectura basada en `UGameInstanceSubsystem` para centralizar sistemas globales como **Audio**, **Gráficos** y **Guardado de datos**.

---

## 🧩 Problemática

En muchos proyectos Unreal, los sistemas globales suelen quedar:

- Distribuidos entre Widgets, GameInstance y Blueprints sueltos
- Acoplados a la UI o a mapas específicos
- Sin un flujo claro de inicialización
- Con configuraciones que no persisten correctamente en builds Shipping

Esto genera bugs difíciles de reproducir, deuda técnica y pérdida de consistencia entre Editor y Runtime.

---

## 💡 Solución

Este plugin provee **SubSystems especializados y persistentes**, basados en `UGameInstanceSubsystem`, que actúan como singletons globales bien definidos para:

- Audio
- Gráficos
- Guardado / carga de datos

Los sistemas:
- Se inicializan automáticamente con el ciclo de vida del Engine
- No dependen de mapas ni UI
- Son reutilizables entre proyectos
- Funcionan correctamente en Editor, DebugGame y Shipping
- Soportan proyectos **Blueprint-only** mediante plugin precompilado

---

## 📦 Instalación (Blueprint-only)

1. Descargar o clonar el repositorio
2. Copiar la carpeta del plugin en: `Engine/Plugins/Marketplace/`
3. Abrir el proyecto Unreal
4. Verificar que el plugin esté habilitado desde **Edit → Plugins**
5. Reiniciar el editor si es necesario

> ⚠️ Para proyectos Blueprint-only, el plugin debe estar instalado a nivel **Engine**, no en `Project/Plugins`.

---

## 🛠 Uso básico

- Los SubSystems se instancian automáticamente al iniciar el juego
- Se acceden desde Blueprints usando:
- `Get Game Instance Subsystem`
- Cada sistema encapsula su propia responsabilidad (Audio, Gráficos, Save)
- Se recomienda **no duplicar lógica** en Widgets ni GameInstance

Ejemplo (Blueprint):
`Get Game Instance Subsystem → AudioSubsystem`

---

## 📌 Notas

- Este plugin no agrega features visibles de gameplay
- Su propósito es mejorar arquitectura, estabilidad y mantenibilidad
- Puede extenderse o adaptarse según las necesidades del proyecto

---

## 🚧 Estado

Proyecto en desarrollo / beta.  
La API puede cambiar mientras se consolida el diseño.
