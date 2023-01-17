#ifndef UE4SS_SDK_HUD_CrossHair_PickAxe_HPP
#define UE4SS_SDK_HUD_CrossHair_PickAxe_HPP

class UHUD_CrossHair_PickAxe_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_1;

    void PreConstruct(bool IsDesignTime);
    void SetData(class APickaxeItem* PickAxe);
    void ExecuteUbergraph_HUD_CrossHair_PickAxe(int32 EntryPoint);
};

#endif
