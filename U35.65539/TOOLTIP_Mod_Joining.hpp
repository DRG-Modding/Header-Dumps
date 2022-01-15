#ifndef UE4SS_SDK_TOOLTIP_Mod_Joining_HPP
#define UE4SS_SDK_TOOLTIP_Mod_Joining_HPP

class UTOOLTIP_Mod_Joining_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Label_C* Mod_ApprovalStatus_Text;
    UBasic_Label_C* Mod_Author_Text;
    UBasic_Label_C* Mod_Description_Text;
    UBasic_Label_C* Mod_Name_Text;
    UImage* Mod_Thumbnail_Image;
    UBasic_Label_C* Mod_Version_Text;
    FString ModId;
    FString Name;
    FString Version;
    FString Description;
    FString Author;
    EUGCApprovalStatus ApprovalState;
    UModioModInfoWrapper* MetaData;
    FString ThumbnailID;

    void SetData(FString InModID, FString InName, FString InVersion, FString InDescription, FString InAuthor, EUGCApprovalStatus InApprovalState, bool InFetchThumbnail, EUGCApprovalStatus Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue_3, FText K2Node_Select_Default);
    void FromMetaData(UModioModInfoWrapper* InMetaData, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void LoadThumbnail();
    void ExecuteUbergraph_TOOLTIP_Mod_Joining(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UTexture2DDynamic* CallFunc_K2_RequestModThumbnailById_outThumbnail, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
}

#endif
