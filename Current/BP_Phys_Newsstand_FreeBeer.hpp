#ifndef UE4SS_SDK_BP_Phys_Newsstand_FreeBeer_HPP
#define UE4SS_SDK_BP_Phys_Newsstand_FreeBeer_HPP

class ABP_Phys_Newsstand_FreeBeer_C : public ABP_Phys_Newsstand_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool ShouldUseEventTexture;
    TSoftObjectPtr<UMaterialInterface> AnniversaryText;
    TSoftObjectPtr<UMaterialInterface> EasterText;
    TSoftObjectPtr<UMaterialInterface> LunarFestivalText;
    TSoftObjectPtr<UMaterialInterface> XmasText;
    TSoftObjectPtr<UMaterialInterface> OktoberfestV1Text;
    bool UseV2Material;
    TSoftObjectPtr<UMaterialInterface> OktoberFestV2Text;
    bool QueuedActivation;

    void ReceiveBeginPlay();
    void SetEventMaterial(TSoftObjectPtr<UMaterialInterface> Material);
    void TrySetupEventText();
    void ExecuteUbergraph_BP_Phys_Newsstand_FreeBeer(int32 EntryPoint);
};

#endif
