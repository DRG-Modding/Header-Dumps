#ifndef UE4SS_SDK_BP_JettyBoots_ClearHighscores_HPP
#define UE4SS_SDK_BP_JettyBoots_ClearHighscores_HPP

class ABP_JettyBoots_ClearHighscores_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ButtonMesh;
    class UStaticMeshComponent* PanelMesh;
    class UBoxComponent* UsableCollider;
    class USceneComponent* Scene;
    class USingleUsableComponent* ClearHighScoresUsable;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress);
    void BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_2_GenericUsableDelegate__DelegateSignature();
    void ExecuteUbergraph_BP_JettyBoots_ClearHighscores(int32 EntryPoint);
};

#endif
