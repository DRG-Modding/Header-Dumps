#ifndef UE4SS_SDK_TOOLTIP_Mod_Joining_HPP
#define UE4SS_SDK_TOOLTIP_Mod_Joining_HPP

class UTOOLTIP_Mod_Joining_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Mod_ApprovalStatus_Text;
    class UBasic_Label_C* Mod_Author_Text;
    class UBasic_Label_C* Mod_Description_Text;
    class UBasic_Label_C* Mod_Name_Text;
    class UImage* Mod_Thumbnail_Image;
    class UBasic_Label_C* Mod_Version_Text;
    FString ModId;
    FString Name;
    FString Version;
    FString Description;
    FString Author;
    EUGCApprovalStatus ApprovalState;
    class UModioModInfoWrapper* MetaData;
    FString ThumbnailID;

    void SetData(FString InModID, FString InName, FString InVersion, FString InDescription, FString InAuthor, EUGCApprovalStatus InApprovalState, bool InFetchThumbnail);
    void FromMetaData(class UModioModInfoWrapper* InMetaData);
    void PreConstruct(bool IsDesignTime);
    void LoadThumbnail();
    void ExecuteUbergraph_TOOLTIP_Mod_Joining(int32 EntryPoint);
};

#endif
