#ifndef UE4SS_SDK_ITM_ValidSeedRequirement_HPP
#define UE4SS_SDK_ITM_ValidSeedRequirement_HPP

class UITM_ValidSeedRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UImage* Image_73;
    class UTextBlock* TextBlock_438;
    bool RequirementMet;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_ValidSeedRequirement(int32 EntryPoint);
};

#endif
