#ifndef UE4SS_SDK_BP_Spacerig_Comet_HPP
#define UE4SS_SDK_BP_Spacerig_Comet_HPP

class ABP_Spacerig_Comet_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Comet_Meteors;
    class USceneComponent* DefaultSceneRoot;
    float Speed_X;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Spacerig_Comet(int32 EntryPoint);
};

#endif
