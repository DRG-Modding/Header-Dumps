#ifndef UE4SS_SDK_BP_PickaxeConsole_HPP
#define UE4SS_SDK_BP_PickaxeConsole_HPP

class ABP_PickaxeConsole_C : public ABP_BaseSpaceRigConsole_C
{
    class UWidgetComponent* TerminalWidget;
    class UStaticMeshComponent* Mesh_Monitor;
    class UCapsuleComponent* collider;
    class UStaticMeshComponent* StaticMesh;

};

#endif
