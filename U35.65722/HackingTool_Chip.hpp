#ifndef UE4SS_SDK_HackingTool_Chip_HPP
#define UE4SS_SDK_HackingTool_Chip_HPP

class UHackingTool_Chip_C : public UHackingToolWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimEnableInterface;
    class UWidgetAnimation* AnimHackingCompleted;
    class UWidgetAnimation* AnimChipChallenge;
    class UWidgetAnimation* AnimZoomInFinal;
    class UWidgetAnimation* AnimBarVerticalFinish;
    class UWidgetAnimation* AnimDotMovementFinish;
    class UWidgetAnimation* AnimBarHorizontalFinish;
    class UWidgetAnimation* AnimDotMovement;
    class UWidgetAnimation* AnimCircleIntro;
    class UWidgetAnimation* AnimStartHacking;
    class UWidgetAnimation* AnimShake;
    class UWidgetAnimation* AnimBarVertical;
    class UWidgetAnimation* AnimBarHorizontal;
    class UUI_ImageTinted_C* Chip_Challenge;
    class UUI_ImageTinted_C* Chip_Dot;
    class UUI_ImageTinted_C* Chip_Filled;
    class UUI_ImageTinted_C* Chip_Outline;
    class UUI_CircularProgressBar_C* Circle;
    class UCanvasPanel* Circle_Canvas;
    class UCanvasPanel* Content_Canvas;
    class UCanvasPanel* Dot_Canvas;
    class UUI_ImageTinted_C* Dot_Image;
    class UCanvasPanel* Grid_Canvas;
    class UBasic_Image_C* Grid_Image;
    class UHorizontalBox* HorizontalBar_Canvas;
    class UUI_ImageTinted_C* HorizontalBar_Solid;
    class UUI_ImageTinted_C* HorizontalBar_Tail;
    class UHackingTool_Button_C* Interface_Button;
    class UHackingTool_Header_C* Interface_Header;
    class UHackingTool_Progress_C* Interface_Progress;
    class UUI_HackingTool_Background_C* UI_HackingTool_Background;
    class UVerticalBox* VerticalBar_Canvas;
    class UUI_ImageTinted_C* VerticalBar_Solid;
    class UUI_ImageTinted_C* VerticalBar_Tail;
    float CameraZoom;
    FVector2D CameraPosition;
    float ChipAngle;
    float ChipDistance;
    float DotAngle;
    float HorizontalTailSize;
    float VerticalTailSize;
    float FinalPanAndZoom;
    float ColoredGridProgress;
    FText DefaultSubtitle;
    class UAudioComponent* IdleAudioComponent;

    void UpdateIdleAudio(class USoundCue* cue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, class USoundCue* Temp_object_Variable, class USoundCue* Temp_object_Variable_1, class USoundCue* Temp_object_Variable_2, class USoundCue* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_GetCurrentStage_CurrentStage, int32 CallFunc_Clamp_ReturnValue, class USoundCue* K2Node_Select_Default, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
    void PlayAudioOnDevice(class USoundCue* InCue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void SetColoredGridProgress(float InValue);
    void SetFinalPanAndZoom(float InFinalPanAndZoom, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetVerticalTailSize(float TailSize, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetHorizontalTailSize(float TailSize, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void HandleClick(float DotSize, FVector2D DotPos, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Abs_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue_2, float CallFunc_BreakVector2D_X_8, float CallFunc_BreakVector2D_Y_8, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Abs_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue);
    void SetDotAngle(float InAngle, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_DegCos_ReturnValue, float CallFunc_DegSin_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue);
    void SetChipPosition(float InAngle, float InDistance, float CallFunc_DegCos_ReturnValue, float CallFunc_DegSin_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetCameraPosition(FVector2D CameraCenter);
    void SetCameraZoom(float CameraZoom, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1);
    void Finished_303E4D8F4F741AD74469EFA5A7CF42D2();
    void Finished_303E4D8F4F741AD74469EFA5C87DAB7C();
    void Finished_303E4D8F4F741AD74469EFA545CF1518();
    void Finished_303E4D8F4F741AD74469EFA5510DEF98();
    void Finished_FEA6E2554BD3BA37B77DD19EFD54A9D5();
    void Finished_FEA6E2554BD3BA37B77DD19E54F70ED6();
    void Finished_FEA6E2554BD3BA37B77DD19EC8B73F22();
    void Finished_FEA6E2554BD3BA37B77DD19E3D6D1F79();
    void Finished_303E4D8F4F741AD74469EFA558B75970();
    void Finished_99C3EF4B470401D640445F9E66532434();
    void Finished_303E4D8F4F741AD74469EFA59D1AD57C();
    void Finished_303E4D8F4F741AD74469EFA5F9ACB30F();
    void PreConstruct(bool IsDesignTime);
    void ReceiveClick();
    void Shake(class UWidgetAnimation* InContinueAnimation, int32 NumLoopsToPlay, float PlaybackSpeed);
    void ReceiveHackingStarted();
    void BndEvt__Interface_Progress_K2Node_ComponentBoundEvent_0_OnNextStage__DelegateSignature(int32 InNewStage, int32 InTotalStages);
    void ReceiveHackingToolUnequipped();
    void ExecuteUbergraph_HackingTool_Chip(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Select_Default, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, int32 K2Node_Select_Default_1, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable_2, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, int32 K2Node_Select_Default_2, bool Temp_bool_Variable_3, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, int32 K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable_4, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_4, bool K2Node_Event_IsDesignTime, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, class UWidgetAnimation* K2Node_CustomEvent_InContinueAnimation, int32 K2Node_CustomEvent_NumLoopsToPlay, float K2Node_CustomEvent_PlaybackSpeed, float CallFunc_PauseAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, FExecuteUbergraph_HackingTool_ChipK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_IsValid_ReturnValue_4, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_3, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Variable_10, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_4, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_5, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_8, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_6, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_6, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_7, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_8, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_8, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_9, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 Temp_int_Variable_11, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool Temp_bool_Variable_6, int32 K2Node_Select_Default_5, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_10, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_13, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 K2Node_Select_Default_6, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_11, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_11, int32 K2Node_ComponentBoundEvent_InNewStage, int32 K2Node_ComponentBoundEvent_InTotalStages, bool CallFunc_IsValid_ReturnValue_14);
};

#endif
