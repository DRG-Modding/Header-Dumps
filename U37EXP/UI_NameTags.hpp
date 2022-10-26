#ifndef UE4SS_SDK_UI_NameTags_HPP
#define UE4SS_SDK_UI_NameTags_HPP

class UUI_NameTags_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Icon;
    class USizeBox* SizeBox_Image;
    float Height;

    void SetData(class AFSDPlayerState* Player);
    void PreConstruct(bool IsDesignTime);
    void OnPlayerNameChanged_Event_0(FString NewName);
    void ExecuteUbergraph_UI_NameTags(int32 EntryPoint);
};

#endif
