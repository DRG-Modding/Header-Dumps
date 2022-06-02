#ifndef UE4SS_SDK_BP_DeepDiveConsole_HPP
#define UE4SS_SDK_BP_DeepDiveConsole_HPP

class ABP_DeepDiveConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ScreenMesh;
    class UTextRenderComponent* WorkName;
    class UWidgetComponent* ScreenWidget;
    class UBoxComponent* InteractionCollider;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer);
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_DeepDiveConsole(int32 EntryPoint);
};

#endif
