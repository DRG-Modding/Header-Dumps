#ifndef UE4SS_SDK_ITEM_SpaceRig_ClassLevel_HPP
#define UE4SS_SDK_ITEM_SpaceRig_ClassLevel_HPP

class UITEM_SpaceRig_ClassLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UInvalidationBox* InvalidationBox_0;
    class USizeBox* SizeBox_3;
    class USpacer* Spacer_0;
    class UTextBlock* TextBlock_0;
    float IconSize;
    int32 FontSize;
    bool HideIcon;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SetLevel(int32 Level);
    void ExecuteUbergraph_ITEM_SpaceRig_ClassLevel(int32 EntryPoint);
};

#endif
