#ifndef UE4SS_SDK_BP_GreatEggHunt_EggWithBow_HPP
#define UE4SS_SDK_BP_GreatEggHunt_EggWithBow_HPP

class ABP_GreatEggHunt_EggWithBow_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FColor> Colors_Bows;
    TArray<class UTexture*> Textures_Eggs;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GreatEggHunt_EggWithBow(int32 EntryPoint);
};

#endif
