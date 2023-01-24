#ifndef UE4SS_SDK_BP_ChangeCharacterConsole_HPP
#define UE4SS_SDK_BP_ChangeCharacterConsole_HPP

class ABP_ChangeCharacterConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Greepling_005;
    class UStaticMeshComponent* SM_Greepling_006;
    class UStaticMeshComponent* SM_Greepling_008;
    class UStaticMeshComponent* SM_Greepling_007;
    class UStaticMeshComponent* SM_Greepling_003;
    class UStaticMeshComponent* SM_Greepling_004;
    class UWidgetComponent* Widget;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_ChangeCharacterConsole(int32 EntryPoint);
};

#endif
