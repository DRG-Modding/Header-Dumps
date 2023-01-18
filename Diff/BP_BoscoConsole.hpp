#ifndef UE4SS_SDK_BP_BoscoConsole_HPP
#define UE4SS_SDK_BP_BoscoConsole_HPP

class ABP_BoscoConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh1;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_BoscoConsole(int32 EntryPoint);
};

#endif
