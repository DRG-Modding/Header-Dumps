#ifndef UE4SS_SDK_BP_CompleteMissionScreen_DorettaHead_HPP
#define UE4SS_SDK_BP_CompleteMissionScreen_DorettaHead_HPP

class ABP_CompleteMissionScreen_DorettaHead_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NiagaraNoBlinking;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* SM_Doretta_Broken;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void StartPlay(ECharselectionCameraLocation selectionLocation);
    void ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead(int32 EntryPoint);
};

#endif
