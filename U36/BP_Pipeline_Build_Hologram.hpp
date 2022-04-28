#ifndef UE4SS_SDK_BP_Pipeline_Build_Hologram_HPP
#define UE4SS_SDK_BP_Pipeline_Build_Hologram_HPP

class ABP_Pipeline_Build_Hologram_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Hologram3;
    class UStaticMeshComponent* Hologram2;
    class UStaticMeshComponent* Hologram1;
    class USceneComponent* TranslateRoot;
    class USceneComponent* RotateRoot;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Pipeline_Build_Hologram(int32 EntryPoint);
};

#endif
