#ifndef UE4SS_SDK_BP_CharCustomizationConsole_HPP
#define UE4SS_SDK_BP_CharCustomizationConsole_HPP

class ABP_CharCustomizationConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UWidgetComponent* Widget3;
    class UStaticMeshComponent* Mesh_Monitor4;
    class UWidgetComponent* Widget1;
    class UStaticMeshComponent* Mesh_Monitor2;
    class UStaticMeshComponent* Mesh_LockerLeft1;
    class UStaticMeshComponent* Mesh_LockerRight1;
    class UChildActorComponent* ChildActor;
    class UStaticMeshComponent* Mesh_LockerRight;
    class UStaticMeshComponent* Mesh_LockerLeft;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* Mesh_Monitor;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* InteractionCollider;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_CharCustomizationConsole(int32 EntryPoint);
};

#endif
