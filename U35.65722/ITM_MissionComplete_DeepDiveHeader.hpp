#ifndef UE4SS_SDK_ITM_MissionComplete_DeepDiveHeader_HPP
#define UE4SS_SDK_ITM_MissionComplete_DeepDiveHeader_HPP

class UITM_MissionComplete_DeepDiveHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Data_CodeName;
    class UTextBlock* Data_Region;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UTextBlock* TXT_Codename;
    class UTextBlock* TXT_Region;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void ExecuteUbergraph_ITM_MissionComplete_DeepDiveHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, const FText CallFunc_GetBiomeName_ReturnValue);
};

#endif
