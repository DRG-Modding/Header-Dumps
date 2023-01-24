#ifndef UE4SS_SDK_HUD_CrossHair_JetPack_HPP
#define UE4SS_SDK_HUD_CrossHair_JetPack_HPP

class UHUD_CrossHair_JetPack_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_JetPack(int32 EntryPoint);
};

#endif
