#ifndef UE4SS_SDK_UI_RetirementInfo_HPP
#define UE4SS_SDK_UI_RetirementInfo_HPP

class UUI_RetirementInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* AdditionalBenefitsBox;
    class UBasic_Menu_SmallWindowWithHeader_C* Basic_Menu_SmallWindowWithHeader;
    class UVerticalBox* BenefitsBox;
    class UVerticalBox* Character1stBox;
    class UFSDLabelWidget* FSDLabelWidget_0;
    class UFSDLabelWidget* FSDLabelWidget_9;
    class UFSDLabelWidget* FSDLabelWidget_10;
    class UHorizontalBox* HorizontalBox_Cost;
    class UImage* Image_0;
    class UImage* Image_1;
    class UITM_Craft_ResourceBig_C* ITM_Craft_ResourceBig;
    class UVerticalBox* NoPromotionsBox;
    bool NoCharactersPromoted;
    int32 CharacterRetirementCount;
    bool Enable Preview;

    void UpdateBenefits(bool InNoCharactersPromoted, int32 InCharacterRetirementCount);
    void SetData(TSubclassOf<class APlayerCharacter> Character);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RetirementInfo(int32 EntryPoint);
};

#endif
