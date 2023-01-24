#ifndef UE4SS_SDK_BP_TradingConsole_HPP
#define UE4SS_SDK_BP_TradingConsole_HPP

class ABP_TradingConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box1;
    class UWidgetComponent* Widget_Second;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget_Main;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer);
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_TradingConsole(int32 EntryPoint);
};

#endif
