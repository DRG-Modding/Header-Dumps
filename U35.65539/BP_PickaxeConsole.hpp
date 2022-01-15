#ifndef UE4SS_SDK_BP_PickaxeConsole_HPP
#define UE4SS_SDK_BP_PickaxeConsole_HPP

class ABP_PickaxeConsole_C : ABP_BaseSpaceRigConsole_C
{
    UWidgetComponent* TerminalWidget;
    UStaticMeshComponent* Mesh_Monitor;
    UCapsuleComponent* collider;
    UStaticMeshComponent* StaticMesh;
}

#endif
