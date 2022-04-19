#ifndef UE4SS_SDK_BP_SelectCharacterOnlyConsole_HPP
#define UE4SS_SDK_BP_SelectCharacterOnlyConsole_HPP

class ABP_SelectCharacterOnlyConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* Box;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* Mesh_CPU;
    class UStaticMeshComponent* Mesh_Keyboard;
    class UStaticMeshComponent* Mesh_Monitor;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_SelectCharacterOnlyConsole(int32 EntryPoint);
};

#endif
