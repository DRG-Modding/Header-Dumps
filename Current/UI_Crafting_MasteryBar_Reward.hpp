#ifndef UE4SS_SDK_UI_Crafting_MasteryBar_Reward_HPP
#define UE4SS_SDK_UI_Crafting_MasteryBar_Reward_HPP

class UUI_Crafting_MasteryBar_Reward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_221;
    class UBasic_Image_C* Reward_Image;
    class UBasic_Label_C* Reward_Text;
    int32 Size;
    class UResourceData* Resource;
    int32 Amount;
    int32 FontSize;

    void SetFromLevel(int32 InLevel);
    void SetResourceReward(class UResourceData* Resource, int32 Amount);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Crafting_MasteryBar_Reward(int32 EntryPoint);
};

#endif
