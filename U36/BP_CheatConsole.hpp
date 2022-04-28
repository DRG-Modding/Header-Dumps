#ifndef UE4SS_SDK_BP_CheatConsole_HPP
#define UE4SS_SDK_BP_CheatConsole_HPP

class ABP_CheatConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_CheatConsole(int32 EntryPoint);
};

#endif
