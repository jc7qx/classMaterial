"""

"""
import streamlit as st

data = ["taipei", "shilin", "pindong","taichung"]
col1, col2, col3 = st.columns(3)

with col3:
    k=[]
    for item in data:
        k.append(st.checkbox(item, key=item))

with col1:
    x = st.button("get it")
    if x:
        for j in k:
            st.write(j)