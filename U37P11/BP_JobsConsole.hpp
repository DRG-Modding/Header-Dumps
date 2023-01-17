#ifndef UE4SS_SDK_BP_JobsConsole_HPP
#define UE4SS_SDK_BP_JobsConsole_HPP

class ABP_JobsConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Monitor;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer);
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_JobsConsole(int32 EntryPoint);
};

#endif
