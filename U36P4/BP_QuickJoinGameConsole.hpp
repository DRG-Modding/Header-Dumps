#ifndef UE4SS_SDK_BP_QuickJoinGameConsole_HPP
#define UE4SS_SDK_BP_QuickJoinGameConsole_HPP

class ABP_QuickJoinGameConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UTextRenderComponent* TextRender1;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_QuickJoinGameConsole(int32 EntryPoint);
};

#endif
