#ifndef UE4SS_SDK_ITM_MissionComplete_DeepDiveHeader_HPP
#define UE4SS_SDK_ITM_MissionComplete_DeepDiveHeader_HPP

class UITM_MissionComplete_DeepDiveHeader_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Data_CodeName;
    UTextBlock* Data_Region;
    UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    UTextBlock* TXT_Codename;
    UTextBlock* TXT_Region;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void ExecuteUbergraph_ITM_MissionComplete_DeepDiveHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime, uint8 CallFunc_MakeLiteralByte_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, const FText CallFunc_GetBiomeName_ReturnValue);
}

#endif
