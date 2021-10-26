// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// Size: 0x0c (Inherited: 0x00)
struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x00(0x08)
	bool bOverridesDefault; // 0x08(0x01)
};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
// Size: 0x20 (Inherited: 0x08)
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	FMovieSceneEvaluationOperand Operand; // 0x08(0x14)
};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	FFrameNumber SectionStartTime; // 0x20(0x04)
	FGuid OuterBindingId; // 0x24(0x10)
	FMovieSceneEvaluationOperand InnerOperand; // 0x34(0x14)
};

